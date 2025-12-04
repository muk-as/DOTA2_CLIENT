#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // 
        // static metadata: MNetworkVarNames "int m_nGridX"
        // static metadata: MNetworkVarNames "int m_nGridY"
        // static metadata: MNetworkVarNames "int m_nRadius"
        // static metadata: MNetworkVarNames "int8 m_nViewerType"
        // static metadata: MNetworkVarNames "bool m_bObstructedVision"
        // static metadata: MNetworkVarNames "bool m_bValid"
        #pragma pack(push, 1)
        struct TempViewerInfo_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            std::int32_t m_nGridX; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            std::int32_t m_nGridY; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            std::int32_t m_nRadius; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            std::int8_t m_nViewerType; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            bool m_bObstructedVision; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            bool m_bValid; // 0x_            
            bool m_bDirty; // 0x_            
            source2sdk::entity2::GameTime_t flEndTime; // 0x_            
            std::int32_t nFoWID; // 0x_            
            // hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hOwner;
            char hOwner[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, m_nGridX) == 0x_);
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, m_nGridY) == 0x_);
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, m_nRadius) == 0x_);
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, m_nViewerType) == 0x_);
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, m_bObstructedVision) == 0x_);
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, m_bValid) == 0x_);
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, m_bDirty) == 0x_);
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, flEndTime) == 0x_);
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, nFoWID) == 0x_);
        static_assert(offsetof(source2sdk::server::TempViewerInfo_t, hOwner) == 0x_);
        
        static_assert(sizeof(source2sdk::server::TempViewerInfo_t) == 0x_);
    };
};
