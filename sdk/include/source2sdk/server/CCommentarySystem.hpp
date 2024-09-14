#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPointCommentaryNode;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x60
    // Has VTable
    #pragma pack(push, 1)
    class CCommentarySystem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x11]; // 0x0
        bool m_bCommentaryConvarsChanging; // 0x11        
        bool m_bCommentaryEnabledMidGame; // 0x12        
        [[maybe_unused]] std::uint8_t pad_0x13[0x1]; // 0x13
        entity2::GameTime_t m_flNextTeleportTime; // 0x14        
        int32_t m_iTeleportStage; // 0x18        
        bool m_bCheatState; // 0x1c        
        bool m_bIsFirstSpawnGroupToLoad; // 0x1d        
        [[maybe_unused]] std::uint8_t pad_0x1e[0x1a]; // 0x1e
        // m_hCurrentNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPointCommentaryNode> m_hCurrentNode;
        char m_hCurrentNode[0x4]; // 0x38        
        // m_hActiveCommentaryNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPointCommentaryNode> m_hActiveCommentaryNode;
        char m_hActiveCommentaryNode[0x4]; // 0x3c        
        // m_hLastCommentaryNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPointCommentaryNode> m_hLastCommentaryNode;
        char m_hLastCommentaryNode[0x4]; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CPointCommentaryNode>> m_vecNodes;
        char m_vecNodes[0x18]; // 0x48        
        
        // Datamap fields:
        // void m_ModifiedConvars; // 0x20
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCommentarySystem, m_bCommentaryConvarsChanging) == 0x11);
    static_assert(offsetof(CCommentarySystem, m_bCommentaryEnabledMidGame) == 0x12);
    static_assert(offsetof(CCommentarySystem, m_flNextTeleportTime) == 0x14);
    static_assert(offsetof(CCommentarySystem, m_iTeleportStage) == 0x18);
    static_assert(offsetof(CCommentarySystem, m_bCheatState) == 0x1c);
    static_assert(offsetof(CCommentarySystem, m_bIsFirstSpawnGroupToLoad) == 0x1d);
    static_assert(offsetof(CCommentarySystem, m_hCurrentNode) == 0x38);
    static_assert(offsetof(CCommentarySystem, m_hActiveCommentaryNode) == 0x3c);
    static_assert(offsetof(CCommentarySystem, m_hLastCommentaryNode) == 0x40);
    static_assert(offsetof(CCommentarySystem, m_vecNodes) == 0x48);
    
    static_assert(sizeof(CCommentarySystem) == 0x60);
};
