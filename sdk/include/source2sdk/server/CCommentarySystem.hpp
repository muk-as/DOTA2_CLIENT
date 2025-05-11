#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPointCommentaryNode;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
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
            uint8_t _pad0000[0x11]; // 0x0
            bool m_bCommentaryConvarsChanging; // 0x11            
            bool m_bCommentaryEnabledMidGame; // 0x12            
            uint8_t _pad0013[0x1]; // 0x13
            source2sdk::entity2::GameTime_t m_flNextTeleportTime; // 0x14            
            std::int32_t m_iTeleportStage; // 0x18            
            bool m_bCheatState; // 0x1c            
            bool m_bIsFirstSpawnGroupToLoad; // 0x1d            
            uint8_t _pad001e[0x1a]; // 0x1e
            // m_hCurrentNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointCommentaryNode> m_hCurrentNode;
            char m_hCurrentNode[0x4]; // 0x38            
            // m_hActiveCommentaryNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointCommentaryNode> m_hActiveCommentaryNode;
            char m_hActiveCommentaryNode[0x4]; // 0x3c            
            // m_hLastCommentaryNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointCommentaryNode> m_hLastCommentaryNode;
            char m_hLastCommentaryNode[0x4]; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CPointCommentaryNode>> m_vecNodes;
            char m_vecNodes[0x18]; // 0x48            
            
            // Datamap fields:
            // void m_ModifiedConvars; // 0x20
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_bCommentaryConvarsChanging) == 0x11);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_bCommentaryEnabledMidGame) == 0x12);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_flNextTeleportTime) == 0x14);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_iTeleportStage) == 0x18);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_bCheatState) == 0x1c);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_bIsFirstSpawnGroupToLoad) == 0x1d);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_hCurrentNode) == 0x38);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_hActiveCommentaryNode) == 0x3c);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_hLastCommentaryNode) == 0x40);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_vecNodes) == 0x48);
        
        static_assert(sizeof(source2sdk::server::CCommentarySystem) == 0x60);
    };
};
