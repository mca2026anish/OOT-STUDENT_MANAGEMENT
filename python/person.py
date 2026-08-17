from abc import ABC, abstractmethod

class Person(ABC):

    def __init__(self, id, name):
        self.__id = id
        self.__name = name

    # Getter
    def get_name(self):
        return self.__name

    # Setter
    def set_name(self, name):
        self.__name = name

    @abstractmethod
    def display_role(self):
        pass