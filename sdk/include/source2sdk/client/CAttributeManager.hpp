#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAttributeManager_cached_attribute_float_t.hpp"
#include "source2sdk/client/attributeprovidertypes_t.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x68
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iReapplyProvisionParity"
        // static metadata: MNetworkVarNames "EHANDLE m_hOuter"
        // static metadata: MNetworkVarNames "attributeprovidertypes_t m_ProviderType"
        #pragma pack(push, 1)
        class CAttributeManager
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_Providers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_Providers;
            char m_Providers[0x18]; // 0x8            
            // m_Receivers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_Receivers;
            char m_Receivers[0x18]; // 0x20            
            // metadata: MNetworkEnable
            std::int32_t m_iReapplyProvisionParity; // 0x38            
            // metadata: MNetworkEnable
            // m_hOuter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOuter;
            char m_hOuter[0x4]; // 0x3c            
            bool m_bPreventLoopback; // 0x40            
            uint8_t _pad0041[0x3]; // 0x41
            // metadata: MNetworkEnable
            source2sdk::client::attributeprovidertypes_t m_ProviderType; // 0x44            
            // m_CachedResults has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CAttributeManager_cached_attribute_float_t> m_CachedResults;
            char m_CachedResults[0x18]; // 0x48            
            uint8_t _pad0060[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_Providers) == 0x8);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_Receivers) == 0x20);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_iReapplyProvisionParity) == 0x38);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_hOuter) == 0x3c);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_bPreventLoopback) == 0x40);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_ProviderType) == 0x44);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_CachedResults) == 0x48);
        
        static_assert(sizeof(source2sdk::client::CAttributeManager) == 0x68);
    };
};
