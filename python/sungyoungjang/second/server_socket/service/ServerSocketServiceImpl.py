from server_socket.service.ServerSocketService import ServerSocketService


class ServerSocketServiceImpl(ServerSocketService):
    def __init__(self):
        print("ServerSocketServiceImpl 생성자 호출")
        self.__serverSocketRepository = ServerSocketServiceImpl()
        #self.__serverSocketRepository = ClintSocketServiceImpl()

    def createServerSocket(self, host, port):
        pass
        return self.__serverSocketRepository.create(host, port)