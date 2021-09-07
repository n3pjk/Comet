# Comet
This skin provides a Comet Lake CPU widget, configured on an Alienware Area 51m R2. The north bridge, CPU cores, ring bus interconnect, integrated graphics, and surrounding package die change from green to red depending on the temperature of each commponent. Left clicking on different components will display an associated graph or set of graphs for related items, like disk drives and GPUs.

You will need to update the HWiNFO IDs included in this skin to match the IDs for your system.  To do this:

1. Ensure HWiNFO is running, with sensors and shared memory active.
2. Run the included **HWiNFOSharedMemoryViewer.exe** executable. You can also launch this from the context menu of the rainmeter skin by right-clicking the skin.
3. Find the sensor reading you need, for example CPU Usage for example, and make note of the sensor id, sensor instance and entry id.
4. Edit the HWiNFO.inc file in the @Resources folder to replace the provided IDs with the IDs for your system.
5. Refresh the HWiNFO skin.

For detailed information, please see the following threads:
* [Rainmeter plug-in for HWiNFO](https://www.hwinfo.com/forum/threads/rainmeter-plug-in-for-hwinfo.528/)
* [Rainmeter + HWiNFO - Getting Up and Running](https://www.hwinfo.com/forum/threads/rainmeter-hwinfo-getting-up-and-running.2174/)
* [Rainmeter plug-in for HWiNFO 3.2](https://www.hwinfo.com/forum/threads/rainmeter-plug-in-for-hwinfo-3-2.2172/)

Skin Authors:
A 32 and 64 bit redistributable copy of Nick Connors' (stangowner) plugin is availabe in the @Resources\RedistributablePlugin folder.  Feel free to use them in your own works.  If you have a skin you'd like to share, kindly mention it in the [forum](https://www.hwinfo.com/forum/forums/rainmeter-plug-in.12/).