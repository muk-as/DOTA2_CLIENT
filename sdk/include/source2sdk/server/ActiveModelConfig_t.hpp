#pragma once
#include "source2sdk/client/ModelConfigHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseModelEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x68
    // 
    // static metadata: MNetworkVarNames "ModelConfigHandle_t m_Handle"
    // static metadata: MNetworkVarNames "string_t m_Name"
    // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_AssociatedEntities"
    // static metadata: MNetworkVarNames "string_t m_AssociatedEntityNames"
    #pragma pack(push, 1)
    struct ActiveModelConfig_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x28]; // 0x0
        // metadata: MNetworkEnable
        client::ModelConfigHandle_t m_Handle; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_Name; // 0x30        
        // metadata: MNetworkEnable
        // m_AssociatedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseModelEntity>> m_AssociatedEntities;
        char m_AssociatedEntities[0x18]; // 0x38        
        // metadata: MNetworkEnable
        // m_AssociatedEntityNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlSymbolLarge> m_AssociatedEntityNames;
        char m_AssociatedEntityNames[0x18]; // 0x50        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ActiveModelConfig_t, m_Handle) == 0x28);
    static_assert(offsetof(ActiveModelConfig_t, m_Name) == 0x30);
    static_assert(offsetof(ActiveModelConfig_t, m_AssociatedEntities) == 0x38);
    static_assert(offsetof(ActiveModelConfig_t, m_AssociatedEntityNames) == 0x50);
    
    static_assert(sizeof(ActiveModelConfig_t) == 0x68);
};
