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
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Transform: Rigid Deformation"
    // static metadata: MPropertyDescription "Apply the active deformer to the current transform as a rigid deformation and disable the deformer."
    // static metadata: MVDataClassGroup
    // static metadata: MVDataComponentRequiresAncestor
    #pragma pack(push, 1)
    class CSmartPropOperation_RigidDeformation : public smartprops::CSmartPropTransformOperation
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CSmartPropOperation_RigidDeformation) == 0x50);
};
