project 'SignalR.Client.ObjC/SignalR.Client.ObjC.xcodeproj'
workspace 'SignalR.Client.ObjC'

use_frameworks!

pod 'AFNetworking'
pod 'SocketRocket'

target "SignalR.Client.iOS" do
    platform :ios, '8.0'
    
    target "SignalR.Client.iOSTests" do
        pod 'OCMock'
        pod 'URLMock', '1.3.2'
    end
end

target :"SignalR.Client.OSX" do
    platform :osx, '10.9'
    
    target :"SignalR.Client.OSXTests" do
        pod 'OCMock'
        pod 'URLMock', '1.3.2'
    end
end
