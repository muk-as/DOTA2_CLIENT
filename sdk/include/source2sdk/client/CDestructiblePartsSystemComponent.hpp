#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x88
        #pragma pack(push, 1)
        class CDestructiblePartsSystemComponent
        {
        public:
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x0            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseModelEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x28            
            uint8_t _pad002c[0x54]; // 0x2c
            std::int32_t m_nLastHitPartIndex; // 0x80            
            uint8_t _pad0084[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemComponent, __m_pChainEntity) == 0x0);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemComponent, m_hOwner) == 0x28);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemComponent, m_nLastHitPartIndex) == 0x80);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemComponent) == 0x88);
    };
};
