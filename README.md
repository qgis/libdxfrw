libdxfrw ![Build status](https://api.travis-ci.org/LibreCAD/libdxfrw.svg?branch=master)
==========

libdxfrw is a free C++ library to read and write DXF files in both formats, ascii and binary form.
 It is licensed under the terms of the GNU General Public License version 2 (or at you option
any later version).


A fork of http://sourceforge.net/projects/libdxfrw


This project is an attempt to refactor out QGIS specific code paths from libdxfrw, so that fixes from the QGIS internal copy can be upstreamed to https://github.com/LibreCAD/libdxfrw (or alternative)

==========

Building and installing the library
==========
```
mkdir build
cd build
cmake ..
make 
sudo make install
```

For non-debug version:
==========

```
mkdir release
cd release
cmake -DCMAKE_BUILD_TYPE=Release ..
make 
sudo make install
```

== UBUNTU/Mint Folks ==

```
mkdir release
cd release
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX:PATH=/usr .. && make all
make 
sudo make install
```


== Example usage of the library ==

See how we use it in LibreCAD V3 : https://github.com/LibreCAD/LibreCAD_3/tree/master/persistence/libdxfrw
