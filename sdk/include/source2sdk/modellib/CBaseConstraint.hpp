#pragma once
#include "source2sdk/modellib/CBoneConstraintBase.hpp"
#include "source2sdk/modellib/CConstraintSlave.hpp"
#include "source2sdk/modellib/CConstraintTarget.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x68
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBaseConstraint : public modellib::CBoneConstraintBase
    {
    public:
        CUtlString m_name; // 0x28        
        Vector m_vUpVector; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4]; // 0x3c
        // m_slaves has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<modellib::CConstraintSlave> m_slaves;
        char m_slaves[0x10]; // 0x40        
        // m_targets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CConstraintTarget> m_targets;
        char m_targets[0x18]; // 0x50        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseConstraint because it is not a standard-layout class
    static_assert(sizeof(CBaseConstraint) == 0x68);
};
