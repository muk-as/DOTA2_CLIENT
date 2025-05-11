#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
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
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_FacelessVoid_TimeWalk : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05b8[0x10]; // 0x5b8
            // m_hSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTABaseAbility> m_hSourceAbility;
            char m_hSourceAbility[0x4]; // 0x5c8            
            std::int32_t speed; // 0x5cc            
            std::int32_t range; // 0x5d0            
            float radius; // 0x5d4            
            std::int32_t m_nProjectileID; // 0x5d8            
            Vector m_vProjectileLocation; // 0x5dc            
            Vector m_vStartLocation; // 0x5e8            
            uint8_t _pad05f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_FacelessVoid_TimeWalk because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_FacelessVoid_TimeWalk) == 0x5f8);
    };
};
