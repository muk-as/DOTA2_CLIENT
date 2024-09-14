#pragma once
#include "source2sdk/client/EOverworldNodeFlags.hpp"
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
        client::OverworldNodeID_t m_unID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x02[0x2]; // 0x2
        Vector2D m_vPos; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // metadata: MPropertyDescription "A css class to be applied to the node."
        CUtlString m_sCustomClass; // 0x10        
        // metadata: MPropertyDescription "Name/Key used to look up which Visual Novel dialogue to use."
        CUtlString m_sDialogueName; // 0x18        
        CUtlString m_sRewardEventAction; // 0x20        
        // metadata: MPropertyDescription "If defined, this node and the path to it are invisible and unreachable to players unless they own a specific event action."
        CUtlString m_sHiddenWithoutEventAction; // 0x28        
        CUtlString m_sJSEvent; // 0x30        
        float m_flUnlockDelay; // 0x38        
        bool m_bSkipGrantingRewardOnUnlock; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x3d[0x3]; // 0x3d
        client::EOverworldNodeFlags m_eNodeFlags; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        CUtlString m_sEncounterName; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x50[0x8]; // 0x50
        // metadata: MPropertyDescription "CSS Classes that will be applied to the map when this node is unlocked."
        // m_vecUnlockMapClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecUnlockMapClasses;
        char m_vecUnlockMapClasses[0x18]; // 0x58        
        // metadata: MPropertyDescription "CSS Classes that will be applied to the map when this node is being visited, and removed when leaving it."
        // m_vecVisitMapClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecVisitMapClasses;
        char m_vecVisitMapClasses[0x18]; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x88[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldNode, m_unID) == 0x0);
    static_assert(offsetof(CDOTAOverworldNode, m_vPos) == 0x4);
    static_assert(offsetof(CDOTAOverworldNode, m_sCustomClass) == 0x10);
    static_assert(offsetof(CDOTAOverworldNode, m_sDialogueName) == 0x18);
    static_assert(offsetof(CDOTAOverworldNode, m_sRewardEventAction) == 0x20);
    static_assert(offsetof(CDOTAOverworldNode, m_sHiddenWithoutEventAction) == 0x28);
    static_assert(offsetof(CDOTAOverworldNode, m_sJSEvent) == 0x30);
    static_assert(offsetof(CDOTAOverworldNode, m_flUnlockDelay) == 0x38);
    static_assert(offsetof(CDOTAOverworldNode, m_bSkipGrantingRewardOnUnlock) == 0x3c);
    static_assert(offsetof(CDOTAOverworldNode, m_eNodeFlags) == 0x40);
    static_assert(offsetof(CDOTAOverworldNode, m_sEncounterName) == 0x48);
    static_assert(offsetof(CDOTAOverworldNode, m_vecUnlockMapClasses) == 0x58);
    static_assert(offsetof(CDOTAOverworldNode, m_vecVisitMapClasses) == 0x70);
    
    static_assert(sizeof(CDOTAOverworldNode) == 0x90);
};
