#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact() {} // 기본 생성자

    void setFirstName(const std::string& fname) { firstName = fname; }
    void setLastName(const std::string& lname) { lastName = lname; }
    void setNickname(const std::string& nname) { nickname = nname; }
    void setPhoneNumber(const std::string& pnumber) { phoneNumber = pnumber; }
    void setDarkestSecret(const std::string& secret) { darkestSecret = secret; }

    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getNickname() const { return nickname; }
    std::string getPhoneNumber() const { return phoneNumber; }
    std::string getDarkestSecret() const { return darkestSecret; }
};

class PhoneBook {
private:
    std::vector<Contact> contacts;

public:
    PhoneBook() {} // 기본 생성자

    bool addContact(const Contact& contact) {
        if(contacts.size() < 8) {
            contacts.push_back(contact);
        } else {
            contacts.erase(contacts.begin()); // 가장 오래된 연락처를 지움
            contacts.push_back(contact);
        }
        return true;
    }

    Contact getContact(int index) const {
        if(index >= 0 && static_cast<unsigned int>(index) < contacts.size())
            return contacts[index];
        return Contact(); // index 범위 외인 경우 기본 Contact 반환
    }

    std::size_t size() const { return contacts.size(); }
};

std::string truncateWithDot(const std::string& str, int width) {
    if(str.length() <= static_cast<unsigned int>(width))
        return str.substr(0, static_cast<unsigned int>(width));
    else
        return str.substr(0, static_cast<unsigned int>(width - 1)) + ".";
}

void addNewContact(PhoneBook& phonebook) {
    Contact newContact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    newContact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    newContact.setNickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    newContact.setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    newContact.setDarkestSecret(input);

    phonebook.addContact(newContact);
    std::cout << "Contact added successfully!" << std::endl;
}

void searchContact(const PhoneBook& phonebook) {
    int index;
    for(unsigned int i = 0; i < phonebook.size(); ++i) {
        Contact contact = phonebook.getContact(static_cast<int>(i));
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncateWithDot(contact.getFirstName(), 10) << "|"
                  << std::setw(10) << truncateWithDot(contact.getLastName(), 10) << "|"
                  << std::setw(10) << truncateWithDot(contact.getNickname(), 10) << std::endl;
    }
    std::cout << "Enter the index of the contact you want to view: ";
    std::cin >> index;
    std::cin.ignore();
    if(index >= 0 && static_cast<unsigned int>(index) < phonebook.size()) {
        Contact singleContact = phonebook.getContact(index);
        std::cout << "First Name: " << singleContact.getFirstName() << std::endl;
        std::cout << "Last Name: " << singleContact.getLastName() << std::endl;
        std::cout << "Nickname: " << singleContact.getNickname() << std::endl;
        std::cout << "Phone Number: " << singleContact.getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << singleContact.getDarkestSecret() << std::endl;
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}

int main() {
    PhoneBook phonebook;
    std::string command;

    while(true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if(command == "ADD") {
            addNewContact(phonebook);
        } else if(command == "SEARCH") {
            searchContact(phonebook);
        } else if(command == "EXIT") {
            std::cout << "Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid command, please try again." << std::endl;
        }
    }
    return 0;
}
