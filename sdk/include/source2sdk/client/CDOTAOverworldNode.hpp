#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EOverworldNodeFlags.hpp"
#include "source2sdk/client/OverworldNodeID_t.hpp"

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
        // Size: 0x90
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldNode
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_id_node"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::OverworldNodeID_t m_unID; // 0x0            
            uint8_t _pad0002[0x2]; // 0x2
            Vector2D m_vPos; // 0x4            
            source2sdk::client::EOverworldNodeFlags m_eNodeFlags; // 0xc            
            // metadata: MPropertyDescription "Name/Key used to look up which Visual Novel dialogue to use."
            CUtlString m_sDialogueName; // 0x10            
            CUtlString m_sRewardEventAction; // 0x18            
            bool m_bSkipGrantingRewardOnUnlock; // 0x20            
            uint8_t _pad0021[0x7]; // 0x21
            // metadata: MPropertyDescription "If defined, this node and the path to it are invisible and unreachable to players unless they own a specific event action."
            CUtlString m_sHiddenWithoutEventAction; // 0x28            
            CUtlString m_sJSEvent; // 0x30            
            // metadata: MPropertyDescription "A css class to be applied to the node."
            CUtlString m_sCustomClass; // 0x38            
            float m_flUnlockDelay; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            CUtlString m_sEncounterName; // 0x48            
            uint8_t _pad0050[0x8]; // 0x50
            // metadata: MPropertyDescription "CSS Classes that will be applied to the map when this node is unlocked."
            // m_vecUnlockMapClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecUnlockMapClasses;
            char m_vecUnlockMapClasses[0x18]; // 0x58            
            // metadata: MPropertyDescription "CSS Classes that will be applied to the map when this node is being visited, and removed when leaving it."
            // m_vecVisitMapClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecVisitMapClasses;
            char m_vecVisitMapClasses[0x18]; // 0x70            
            uint8_t _pad0088[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_unID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vPos) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_eNodeFlags) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sDialogueName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sRewardEventAction) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_bSkipGrantingRewardOnUnlock) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sHiddenWithoutEventAction) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sJSEvent) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sCustomClass) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_flUnlockDelay) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sEncounterName) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vecUnlockMapClasses) == 0x58);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vecVisitMapClasses) == 0x70);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldNode) == 0x90);
    };
};
