#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AncientApparition_IceBlast : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            source2sdk::client::CountdownTimer m_PathTimer; // 0x680            
            Vector m_vTarget; // 0x698            
            Vector m_vStartPos; // 0x6a4            
            Vector m_vLastTempViewer; // 0x6b0            
            std::int32_t m_iTrackerProjectile; // 0x6bc            
            float path_radius; // 0x6c0            
            float radius_min; // 0x6c4            
            float radius_max; // 0x6c8            
            float radius_grow; // 0x6cc            
            float frostbite_duration; // 0x6d0            
            float target_sight_radius; // 0x6d4            
            // m_hFrostbittenEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hFrostbittenEntities;
            char m_hFrostbittenEntities[0x18]; // 0x6d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AncientApparition_IceBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AncientApparition_IceBlast) == 0x6f0);
    };
};
