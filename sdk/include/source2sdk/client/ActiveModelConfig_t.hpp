#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ModelConfigHandle_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ModelConfigHandle_t m_Handle"
        // static metadata: MNetworkVarNames "string_t m_Name"
        // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_AssociatedEntities"
        // static metadata: MNetworkVarNames "string_t m_AssociatedEntityNames"
        #pragma pack(push, 1)
        struct ActiveModelConfig_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::ModelConfigHandle_t m_Handle; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_Name; // 0x38            
            // metadata: MNetworkEnable
            // m_AssociatedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_AssociatedEntities;
            char m_AssociatedEntities[0x18]; // 0x40            
            // metadata: MNetworkEnable
            // m_AssociatedEntityNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_AssociatedEntityNames;
            char m_AssociatedEntityNames[0x18]; // 0x58            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ActiveModelConfig_t, m_Handle) == 0x30);
        static_assert(offsetof(source2sdk::client::ActiveModelConfig_t, m_Name) == 0x38);
        static_assert(offsetof(source2sdk::client::ActiveModelConfig_t, m_AssociatedEntities) == 0x40);
        static_assert(offsetof(source2sdk::client::ActiveModelConfig_t, m_AssociatedEntityNames) == 0x58);
        
        static_assert(sizeof(source2sdk::client::ActiveModelConfig_t) == 0x70);
    };
};
