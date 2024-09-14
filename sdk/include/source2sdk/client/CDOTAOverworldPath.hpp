#pragma once
#include "source2sdk/client/OverworldNodeID_t.hpp"
#include "source2sdk/client/OverworldPathID_t.hpp"
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
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAOverworldPath
    {
    public:
        // metadata: MVDataUniqueMonotonicInt "_editor/next_id_path"
        // metadata: MPropertyAttributeEditor "locked_int()"
        client::OverworldPathID_t m_unID; // 0x0        
        // metadata: MPropertyDescription
        client::OverworldNodeID_t m_unNodeStart; // 0x2        
        // metadata: MPropertyDescription
        client::OverworldNodeID_t m_unNodeEnd; // 0x4        
        // metadata: MPropertyDescription
        uint8_t m_unCost; // 0x6        
        [[maybe_unused]] std::uint8_t pad_0x07[0x19]; // 0x7
        // metadata: MPropertyAttributeRange "-1 1"
        // metadata: MPropertyDescription "0: line, +: curve to the 'right' from node 1 to node 2, -: curve left"
        float m_flCircleInvRadius; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4]; // 0x24
        // metadata: MPropertyDescription
        // m_vecRequiredTokenNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRequiredTokenNames;
        char m_vecRequiredTokenNames[0x18]; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldPath, m_unID) == 0x0);
    static_assert(offsetof(CDOTAOverworldPath, m_unNodeStart) == 0x2);
    static_assert(offsetof(CDOTAOverworldPath, m_unNodeEnd) == 0x4);
    static_assert(offsetof(CDOTAOverworldPath, m_unCost) == 0x6);
    static_assert(offsetof(CDOTAOverworldPath, m_flCircleInvRadius) == 0x20);
    static_assert(offsetof(CDOTAOverworldPath, m_vecRequiredTokenNames) == 0x28);
    
    static_assert(sizeof(CDOTAOverworldPath) == 0x40);
};
