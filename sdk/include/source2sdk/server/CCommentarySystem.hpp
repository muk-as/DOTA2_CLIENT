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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CCommentarySystem
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_bCommentaryConvarsChanging; // 0x_            
            bool m_bCommentaryEnabledMidGame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flNextTeleportTime; // 0x_            
            std::int32_t m_iTeleportStage; // 0x_            
            bool m_bCheatState; // 0x_            
            bool m_bIsFirstSpawnGroupToLoad; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hCurrentNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointCommentaryNode> m_hCurrentNode;
            char m_hCurrentNode[0x_]; // 0x_            
            // m_hActiveCommentaryNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointCommentaryNode> m_hActiveCommentaryNode;
            char m_hActiveCommentaryNode[0x_]; // 0x_            
            // m_hLastCommentaryNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointCommentaryNode> m_hLastCommentaryNode;
            char m_hLastCommentaryNode[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CPointCommentaryNode>> m_vecNodes;
            char m_vecNodes[0x_]; // 0x_            
            
            // Datamap fields:
            // void m_ModifiedConvars; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_bCommentaryConvarsChanging) == 0x_);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_bCommentaryEnabledMidGame) == 0x_);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_flNextTeleportTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_iTeleportStage) == 0x_);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_bCheatState) == 0x_);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_bIsFirstSpawnGroupToLoad) == 0x_);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_hCurrentNode) == 0x_);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_hActiveCommentaryNode) == 0x_);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_hLastCommentaryNode) == 0x_);
        static_assert(offsetof(source2sdk::server::CCommentarySystem, m_vecNodes) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CCommentarySystem) == 0x_);
    };
};
