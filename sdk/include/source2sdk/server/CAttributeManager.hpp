#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/attributeprovidertypes_t.hpp"
#include "source2sdk/server/CAttributeManager_cached_attribute_float_t.hpp"
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
        // static metadata: MNetworkVarNames "int m_iReapplyProvisionParity"
        // static metadata: MNetworkVarNames "EHANDLE m_hOuter"
        // static metadata: MNetworkVarNames "attributeprovidertypes_t m_ProviderType"
        #pragma pack(push, 1)
        class CAttributeManager
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_Providers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Providers;
            char m_Providers[0x_]; // 0x_            
            // m_Receivers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Receivers;
            char m_Receivers[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iReapplyProvisionParity; // 0x_            
            // metadata: MNetworkEnable
            // m_hOuter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOuter;
            char m_hOuter[0x_]; // 0x_            
            bool m_bPreventLoopback; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::attributeprovidertypes_t m_ProviderType; // 0x_            
            // m_CachedResults has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CAttributeManager_cached_attribute_float_t> m_CachedResults;
            char m_CachedResults[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAttributeManager, m_Providers) == 0x_);
        static_assert(offsetof(source2sdk::server::CAttributeManager, m_Receivers) == 0x_);
        static_assert(offsetof(source2sdk::server::CAttributeManager, m_iReapplyProvisionParity) == 0x_);
        static_assert(offsetof(source2sdk::server::CAttributeManager, m_hOuter) == 0x_);
        static_assert(offsetof(source2sdk::server::CAttributeManager, m_bPreventLoopback) == 0x_);
        static_assert(offsetof(source2sdk::server::CAttributeManager, m_ProviderType) == 0x_);
        static_assert(offsetof(source2sdk::server::CAttributeManager, m_CachedResults) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CAttributeManager) == 0x_);
    };
};
