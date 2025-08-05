#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x730
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_iStat"
        #pragma pack(push, 1)
        class C_DOTA_Item_PowerTreads : public source2sdk::client::C_DOTA_Item
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPowerTreadsStatChanged"
            std::int32_t m_iStat; // 0x728            
            source2sdk::client::ParticleIndex_t nFXIndexTreads; // 0x72c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_PowerTreads because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_PowerTreads) == 0x730);
    };
};
