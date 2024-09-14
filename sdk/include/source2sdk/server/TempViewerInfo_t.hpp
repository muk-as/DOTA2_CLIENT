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
    class CBaseEntity;
};

namespace source2sdk::server
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFieldChanged"
        int32_t m_nGridX; // 0x30        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFieldChanged"
        int32_t m_nGridY; // 0x34        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFieldChanged"
        int32_t m_nRadius; // 0x38        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFieldChanged"
        int8_t m_nViewerType; // 0x3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFieldChanged"
        bool m_bObstructedVision; // 0x3d        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFieldChanged"
        bool m_bValid; // 0x3e        
        // metadata: MNetworkDisable
        bool m_bDirty; // 0x3f        
        // metadata: MNetworkDisable
        entity2::GameTime_t flEndTime; // 0x40        
        // metadata: MNetworkDisable
        int32_t nFoWID; // 0x44        
        // metadata: MNetworkDisable
        // hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hOwner;
        char hOwner[0x4]; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TempViewerInfo_t, m_nGridX) == 0x30);
    static_assert(offsetof(TempViewerInfo_t, m_nGridY) == 0x34);
    static_assert(offsetof(TempViewerInfo_t, m_nRadius) == 0x38);
    static_assert(offsetof(TempViewerInfo_t, m_nViewerType) == 0x3c);
    static_assert(offsetof(TempViewerInfo_t, m_bObstructedVision) == 0x3d);
    static_assert(offsetof(TempViewerInfo_t, m_bValid) == 0x3e);
    static_assert(offsetof(TempViewerInfo_t, m_bDirty) == 0x3f);
    static_assert(offsetof(TempViewerInfo_t, flEndTime) == 0x40);
    static_assert(offsetof(TempViewerInfo_t, nFoWID) == 0x44);
    static_assert(offsetof(TempViewerInfo_t, hOwner) == 0x48);
    
    static_assert(sizeof(TempViewerInfo_t) == 0x50);
};
