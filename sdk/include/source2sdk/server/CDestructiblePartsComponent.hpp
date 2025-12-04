#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseModelEntity;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_hOwner"
        // static metadata: MNetworkVarNames "int m_nLastHitDamageLevel"
        #pragma pack(push, 1)
        class CDestructiblePartsComponent
        {
        public:
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecDamageTakenByHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_vecDamageTakenByHitGroup;
            char m_vecDamageTakenByHitGroup[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseModelEntity> m_hOwner;
            char m_hOwner[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nLastHitDamageLevel; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDestructiblePartsComponent, __m_pChainEntity) == 0x_);
        static_assert(offsetof(source2sdk::server::CDestructiblePartsComponent, m_vecDamageTakenByHitGroup) == 0x_);
        static_assert(offsetof(source2sdk::server::CDestructiblePartsComponent, m_hOwner) == 0x_);
        static_assert(offsetof(source2sdk::server::CDestructiblePartsComponent, m_nLastHitDamageLevel) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDestructiblePartsComponent) == 0x_);
    };
};
