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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            source2sdk::client::OverworldNodeID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_vPos; // 0x_            
            source2sdk::client::EOverworldNodeFlags m_eNodeFlags; // 0x_            
            // metadata: MPropertyDescription "Name/Key used to look up which Visual Novel dialogue to use."
            CUtlString m_sDialogueName; // 0x_            
            CUtlString m_sRewardEventAction; // 0x_            
            bool m_bSkipGrantingRewardOnUnlock; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "If defined, this node and the path to it are invisible and unreachable to players unless they own a specific event action."
            CUtlString m_sHiddenWithoutEventAction; // 0x_            
            CUtlString m_sJSEvent; // 0x_            
            // metadata: MPropertyDescription "A css class to be applied to the node."
            CUtlString m_sCustomClass; // 0x_            
            float m_flUnlockDelay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sEncounterName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "CSS Classes that will be applied to the map when this node is unlocked."
            // m_vecUnlockMapClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecUnlockMapClasses;
            char m_vecUnlockMapClasses[0x_]; // 0x_            
            // metadata: MPropertyDescription "CSS Classes that will be applied to the map when this node is being visited, and removed when leaving it."
            // m_vecVisitMapClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecVisitMapClasses;
            char m_vecVisitMapClasses[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_unID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vPos) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_eNodeFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sDialogueName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sRewardEventAction) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_bSkipGrantingRewardOnUnlock) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sHiddenWithoutEventAction) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sJSEvent) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sCustomClass) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_flUnlockDelay) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_sEncounterName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vecUnlockMapClasses) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldNode, m_vecVisitMapClasses) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldNode) == 0x_);
    };
};
