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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AncientApparition_IceBlast : public source2sdk::server::CDOTABaseAbility
        {
        public:
            source2sdk::server::CountdownTimer m_PathTimer; // 0x_            
            Vector m_vTarget; // 0x_            
            Vector m_vStartPos; // 0x_            
            Vector m_vLastTempViewer; // 0x_            
            std::int32_t m_iTrackerProjectile; // 0x_            
            float path_radius; // 0x_            
            float radius_min; // 0x_            
            float radius_max; // 0x_            
            float radius_grow; // 0x_            
            float frostbite_duration; // 0x_            
            float target_sight_radius; // 0x_            
            // m_hFrostbittenEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hFrostbittenEntities;
            char m_hFrostbittenEntities[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AncientApparition_IceBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_AncientApparition_IceBlast) == 0x_);
    };
};
