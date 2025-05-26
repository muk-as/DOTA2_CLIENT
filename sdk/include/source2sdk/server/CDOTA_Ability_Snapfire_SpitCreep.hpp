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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Snapfire_SpitCreep : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_nDamagePerProjectile; // 0x5c0            
            // m_hGobbledUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGobbledUnit;
            char m_hGobbledUnit[0x4]; // 0x5c4            
            std::int32_t m_nProjectileID; // 0x5c8            
            uint8_t _pad05cc[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Snapfire_SpitCreep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Snapfire_SpitCreep) == 0x5e0);
    };
};
