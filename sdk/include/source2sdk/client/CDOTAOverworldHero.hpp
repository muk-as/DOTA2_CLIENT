#pragma once
#include "source2sdk/client/CDOTAOverworldCharacterBase.hpp"
#include "source2sdk/client/CDOTAOverworldCharacterConditional.hpp"
#include "source2sdk/client/OverworldHeroID_t.hpp"
#include "source2sdk/client/OverworldNodeID_t.hpp"
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
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAOverworldHero
    {
    public:
        client::OverworldHeroID_t m_unID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x1]; // 0x1
        // metadata: MPropertyDescription "The origin node for the hero. Must be unlocked for the hero to appear, and can only path to nodes accessible from here."
        client::OverworldNodeID_t m_unStartNodeID; // 0x2        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // metadata: MPropertyDescription "Nodes the hero cannot pass through, even if unlocked. Allows us to have multiple heroes split up on the map"
        // m_vecBlockedNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::OverworldNodeID_t> m_vecBlockedNodes;
        char m_vecBlockedNodes[0x18]; // 0x8        
        client::CDOTAOverworldCharacterBase m_baseAppearance; // 0x20        
        // metadata: MPropertyDescription "The highest priority overrides go first. The first override that meets its conditions is applied."
        // m_vecOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlPair<client::CDOTAOverworldCharacterConditional,client::CDOTAOverworldCharacterBase>> m_vecOverrides;
        char m_vecOverrides[0x18]; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldHero, m_unID) == 0x0);
    static_assert(offsetof(CDOTAOverworldHero, m_unStartNodeID) == 0x2);
    static_assert(offsetof(CDOTAOverworldHero, m_vecBlockedNodes) == 0x8);
    static_assert(offsetof(CDOTAOverworldHero, m_baseAppearance) == 0x20);
    static_assert(offsetof(CDOTAOverworldHero, m_vecOverrides) == 0x48);
    
    static_assert(sizeof(CDOTAOverworldHero) == 0x60);
};
