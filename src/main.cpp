#include "DynamicBone.h"
#include <maya/MFnPlugin.h>

#define DynamicBoneName "DynamicBone"

MStatus initializePlugin(MObject obj)
{
    MStatus status;
    MFnPlugin plugin(obj, "test", "test", "Any");

    status = plugin.registerNode(DynamicBoneName, DynamicBone::s_id, DynamicBone::creator, DynamicBone::initialize);
    if (!status) {
        status.perror("registerNode");
        return status;
    }

    return status;
}

MStatus uninitializePlugin(MObject obj)
{
    MStatus status;
    MFnPlugin plugin(obj);

    status = plugin.deregisterNode(DynamicBone::s_id);
    if (!status) {
        status.perror("deregisterNode");
        return status;
    }

    return status;
}