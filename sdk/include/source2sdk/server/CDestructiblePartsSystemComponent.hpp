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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x68
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "uint16_t m_DamageLevelTakenByHitGroup"
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_hOwner"
        // static metadata: MNetworkVarNames "int m_nLastHitDamageLevel"
        #pragma pack(push, 1)
        class CDestructiblePartsSystemComponent
        {
        public:
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x0            
            uint8_t _pad0028[0x20]; // 0x28
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDamageLevelTakenByHitGroupChanged"
            // m_DamageLevelTakenByHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint16_t> m_DamageLevelTakenByHitGroup;
            char m_DamageLevelTakenByHitGroup[0x18]; // 0x48            
            // metadata: MNetworkEnable
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseModelEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x60            
            // metadata: MNetworkEnable
            std::int32_t m_nLastHitDamageLevel; // 0x64            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDestructiblePartsSystemComponent, __m_pChainEntity) == 0x0);
        static_assert(offsetof(source2sdk::server::CDestructiblePartsSystemComponent, m_DamageLevelTakenByHitGroup) == 0x48);
        static_assert(offsetof(source2sdk::server::CDestructiblePartsSystemComponent, m_hOwner) == 0x60);
        static_assert(offsetof(source2sdk::server::CDestructiblePartsSystemComponent, m_nLastHitDamageLevel) == 0x64);
        
        static_assert(sizeof(source2sdk::server::CDestructiblePartsSystemComponent) == 0x68);
    };
};
