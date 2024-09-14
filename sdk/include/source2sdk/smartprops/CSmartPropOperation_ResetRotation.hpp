#pragma once
#include "source2sdk/smartprops/CSmartPropTransformOperation.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x150
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Transform: Reset Rotation"
    // static metadata: MPropertyDescription "Reset the current rotation such the element only inherits the object level rotation, but does not inherit the rotation applied to its parent."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_ResetRotation : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyDescription "If enabled, the rotation will be reset to a world space instead of object space, meaning any rotation applied to the object in Hammer will be ignored."
        CSmartPropAttributeBool m_bIgnoreObjectRotation; // 0x50        
        // metadata: MPropertyDescription "Should the pitch (rotation around left vector) value be reset."
        CSmartPropAttributeBool m_bResetPitch; // 0x90        
        // metadata: MPropertyDescription "Should the yaw (roation around the up vector) value be reset."
        CSmartPropAttributeBool m_bResetYaw; // 0xd0        
        // metadata: MPropertyDescription "Should the roll (rotation around forward vector) value be reset."
        CSmartPropAttributeBool m_bResetRoll; // 0x110        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_ResetRotation because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_ResetRotation) == 0x150);
};
