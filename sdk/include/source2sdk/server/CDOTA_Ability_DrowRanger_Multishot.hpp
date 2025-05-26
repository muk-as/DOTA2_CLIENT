#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x688
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_DrowRanger_Multishot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vStartPos; // 0x5c0            
            std::int32_t m_iArrowProjectile; // 0x5cc            
            std::int32_t m_nFXIndex; // 0x5d0            
            float arrow_speed; // 0x5d4            
            std::int32_t arrow_spread; // 0x5d8            
            uint8_t _pad05dc[0x4]; // 0x5dc
            // m_vHitTargets0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets0;
            char m_vHitTargets0[0x18]; // 0x5e0            
            // m_vHitTargets1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets1;
            char m_vHitTargets1[0x18]; // 0x5f8            
            // m_vHitTargets2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets2;
            char m_vHitTargets2[0x18]; // 0x610            
            // m_vHitTargets3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets3;
            char m_vHitTargets3[0x18]; // 0x628            
            // m_vHitTargets4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets4;
            char m_vHitTargets4[0x18]; // 0x640            
            // m_vHitTargets5 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets5;
            char m_vHitTargets5[0x18]; // 0x658            
            // m_vHitTargets6 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets6;
            char m_vHitTargets6[0x18]; // 0x670            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_DrowRanger_Multishot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_DrowRanger_Multishot) == 0x688);
    };
};
