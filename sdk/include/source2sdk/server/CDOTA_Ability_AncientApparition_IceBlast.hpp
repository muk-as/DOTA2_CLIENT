#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Size: 0x628
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AncientApparition_IceBlast : public source2sdk::server::CDOTABaseAbility
        {
        public:
            source2sdk::server::CountdownTimer m_PathTimer; // 0x5b8            
            Vector m_vTarget; // 0x5d0            
            Vector m_vStartPos; // 0x5dc            
            Vector m_vLastTempViewer; // 0x5e8            
            std::int32_t m_iTrackerProjectile; // 0x5f4            
            float path_radius; // 0x5f8            
            float radius_min; // 0x5fc            
            float radius_max; // 0x600            
            float radius_grow; // 0x604            
            float frostbite_duration; // 0x608            
            float target_sight_radius; // 0x60c            
            // m_hFrostbittenEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hFrostbittenEntities;
            char m_hFrostbittenEntities[0x18]; // 0x610            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AncientApparition_IceBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_AncientApparition_IceBlast) == 0x628);
    };
};
