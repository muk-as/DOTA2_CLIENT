#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x50
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
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            std::int32_t m_nGridX; // 0x30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            std::int32_t m_nGridY; // 0x34            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            std::int32_t m_nRadius; // 0x38            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            std::int8_t m_nViewerType; // 0x3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            bool m_bObstructedVision; // 0x3d            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFieldChanged"
            bool m_bValid; // 0x3e            
            bool m_bDirty; // 0x3f            
            source2sdk::entity2::GameTime_t flEndTime; // 0x40            
            std::int32_t nFoWID; // 0x44            
            // hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hOwner;
            char hOwner[0x4]; // 0x48            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, m_nGridX) == 0x30);
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, m_nGridY) == 0x34);
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, m_nRadius) == 0x38);
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, m_nViewerType) == 0x3c);
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, m_bObstructedVision) == 0x3d);
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, m_bValid) == 0x3e);
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, m_bDirty) == 0x3f);
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, flEndTime) == 0x40);
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, nFoWID) == 0x44);
        static_assert(offsetof(source2sdk::client::TempViewerInfo_t, hOwner) == 0x48);
        
        static_assert(sizeof(source2sdk::client::TempViewerInfo_t) == 0x50);
    };
};
