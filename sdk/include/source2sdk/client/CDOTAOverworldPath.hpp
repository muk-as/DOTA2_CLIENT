#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/OverworldNodeID_t.hpp"
#include "source2sdk/client/OverworldPathID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
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
            source2sdk::client::OverworldPathID_t m_unID; // 0x0            
            // metadata: MPropertyDescription
            source2sdk::client::OverworldNodeID_t m_unNodeStart; // 0x2            
            // metadata: MPropertyDescription
            source2sdk::client::OverworldNodeID_t m_unNodeEnd; // 0x4            
            uint8_t _pad0006[0x2]; // 0x6
            // metadata: MPropertyDescription "An event action used to determine."
            CUtlString m_strPathHiddenUntilEventAction; // 0x8            
            // metadata: MPropertyDescription
            std::uint8_t m_unCost; // 0x10            
            uint8_t _pad0011[0x1f]; // 0x11
            // metadata: MPropertyAttributeRange "-1 1"
            // metadata: MPropertyDescription "0: line, +: curve to the 'right' from node 1 to node 2, -: curve left"
            float m_flCircleInvRadius; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // metadata: MPropertyDescription
            // m_vecRequiredTokenNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRequiredTokenNames;
            char m_vecRequiredTokenNames[0x18]; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPath, m_unID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPath, m_unNodeStart) == 0x2);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPath, m_unNodeEnd) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPath, m_strPathHiddenUntilEventAction) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPath, m_unCost) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPath, m_flCircleInvRadius) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldPath, m_vecRequiredTokenNames) == 0x38);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldPath) == 0x50);
    };
};
