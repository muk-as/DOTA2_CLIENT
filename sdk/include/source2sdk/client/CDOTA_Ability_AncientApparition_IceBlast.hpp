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
        // Size: 0x6f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AncientApparition_IceBlast : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            source2sdk::client::CountdownTimer m_PathTimer; // 0x688            
            Vector m_vTarget; // 0x6a0            
            Vector m_vStartPos; // 0x6ac            
            Vector m_vLastTempViewer; // 0x6b8            
            std::int32_t m_iTrackerProjectile; // 0x6c4            
            float path_radius; // 0x6c8            
            float radius_min; // 0x6cc            
            float radius_max; // 0x6d0            
            float radius_grow; // 0x6d4            
            float frostbite_duration; // 0x6d8            
            float target_sight_radius; // 0x6dc            
            // m_hFrostbittenEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hFrostbittenEntities;
            char m_hFrostbittenEntities[0x18]; // 0x6e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AncientApparition_IceBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AncientApparition_IceBlast) == 0x6f8);
    };
};
