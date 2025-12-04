#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAOverworldCharacterBase.hpp"
#include "source2sdk/client/DOTAOverworldCharacterOverrideConditional_t.hpp"
#include "source2sdk/client/OverworldHeroID_t.hpp"
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
        class CDOTAOverworldHero
        {
        public:
            source2sdk::client::OverworldHeroID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "The origin node for the hero. Must be unlocked for the hero to appear, and can only path to nodes accessible from here."
            source2sdk::client::OverworldNodeID_t m_unStartNodeID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Nodes the hero cannot pass through, even if unlocked. Allows us to have multiple heroes split up on the map"
            // m_vecBlockedNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::OverworldNodeID_t> m_vecBlockedNodes;
            char m_vecBlockedNodes[0x_]; // 0x_            
            source2sdk::client::CDOTAOverworldCharacterBase m_baseAppearance; // 0x_            
            // metadata: MPropertyDescription "The highest priority overrides go first. The first override that meets its conditions is applied."
            // m_vecOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DOTAOverworldCharacterOverrideConditional_t> m_vecOverrides;
            char m_vecOverrides[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldHero, m_unID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldHero, m_unStartNodeID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldHero, m_vecBlockedNodes) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldHero, m_baseAppearance) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldHero, m_vecOverrides) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldHero) == 0x_);
    };
};
