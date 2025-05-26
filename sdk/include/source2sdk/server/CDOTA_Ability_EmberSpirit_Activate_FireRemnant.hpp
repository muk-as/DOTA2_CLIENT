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
        // Size: 0x618
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_EmberSpirit_Activate_FireRemnant : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x10]; // 0x5c0
            std::int32_t m_nProjectileID; // 0x5d0            
            Vector m_vStartLocation; // 0x5d4            
            Vector m_vProjectileLocation; // 0x5e0            
            QAngle m_ProjectileAngles; // 0x5ec            
            // m_hRemnantToKill has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemnantToKill;
            char m_hRemnantToKill[0x4]; // 0x5f8            
            bool m_bProjectileStarted; // 0x5fc            
            uint8_t _pad05fd[0x3]; // 0x5fd
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x600            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_EmberSpirit_Activate_FireRemnant because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_EmberSpirit_Activate_FireRemnant) == 0x618);
    };
};
