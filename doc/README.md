aRIA Core
=============

Setup
---------------------
aRIA Core is the original aRIA client and it builds the backbone of the network. It downloads and, by default, stores the entire history of aRIA transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download aRIA Core, visit [aRIAcore.org](https://aRIAcore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run aRIA Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/aRIA-qt` (GUI) or
- `bin/aRIAd` (headless)

### Windows

Unpack the files into a directory, and then run aRIA-qt.exe.

### macOS

Drag aRIA Core to your applications folder, and then run aRIA Core.

### Need Help?

* See the documentation at the [aRIA Bitcointalk.org](https://bitcointalk.org/index.php?topic=5381523.0)
for help and more information.
* Ask for help on [#aRIA](https://webchat.freenode.net/#aRIA) on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#aRIA).
* Ask for help on the [aRIATalk](https://bitcointalk.org/index.php?topic=5381523.0) forums, in the [Technical Support board](https://bitcointalk.org/index.php?topic=5381523.0).

Building
---------------------
The following are developer notes on how to build aRIA Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/aRIA-core/docs/blob/master/gitian-building.md)

Development
---------------------
The aRIA repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.aRIAcore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [aRIATalk](https://aRIAtalk.org/) forums, in the [Development & Technical Discussion board](https://aRIAtalk.org/index.php?board=6.0).
* Discuss project-specific development on #aRIA-core-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#aRIA-core-dev).
* Discuss general aRIA development on #aRIA-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#aRIA-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [aRIA.conf Configuration File](aRIA-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
