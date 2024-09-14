#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNavLinkAnimgraphVar
    {
    public:
        // metadata: MPropertyFriendlyName "Animgraph Navlink Type"
        // metadata: MPropertyDescription "The value of the 'e_navlink_type' or 'e_navlink_type_shared' parameter that should be set on the NPC's animgraph as it starts a 'navlink' movement handshake."
        // metadata: MPropertyAttributeEditor "VDataAnimGraphParamEnumValue( m_sToolsOnlyOwnerModelName; literal; e_navlink_type; e_navlink_type_shared )"
        CGlobalSymbol m_sAnimGraphNavlinkType; // 0x0        
        // metadata: MPropertyFriendlyName "Alignment Degrees"
        // metadata: MPropertyDescription "Amount of angular slack the animation has when aligning to the navlink. 0 indicates that it must be strictly aligned."
        uint32_t m_unAlignmentDegrees; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNavLinkAnimgraphVar, m_sAnimGraphNavlinkType) == 0x0);
    static_assert(offsetof(CNavLinkAnimgraphVar, m_unAlignmentDegrees) == 0x8);
    
    static_assert(sizeof(CNavLinkAnimgraphVar) == 0x10);
};
