## create a plugin with all platforms

note that you first need to make sure that the platforms are all enabled. you can enable a platform using 

`flutter config --enable-linux-desktop`
`flutter config --enable-windows-desktop`
`flutter config --enable-macos-desktop`

`flutter create --platforms=android,ios --template=plugin <plugin name>`

To add platforms, run

`flutter create -t plugin --platforms <platforms> .` 

under <plugin name>
# startup_namer

A new Flutter project.

## Getting Started

This project is a starting point for a Flutter application.

A few resources to get you started if this is your first Flutter project:

- [Lab: Write your first Flutter app](https://flutter.dev/docs/get-started/codelab)
- [Cookbook: Useful Flutter samples](https://flutter.dev/docs/cookbook)

For help getting started with Flutter, view our
[online documentation](https://flutter.dev/docs), which offers tutorials,
samples, guidance on mobile development, and a full API reference.
