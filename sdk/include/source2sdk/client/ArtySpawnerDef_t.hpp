#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyGameObjectDef_t.hpp"
#include "source2sdk/client/EArtyTeam.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ArtySpawnerDef_t : public source2sdk::client::ArtyGameObjectDef_t
        {
        public:
            float m_flInitialDelay; // 0x_            
            float m_flDelayBetween; // 0x_            
            std::int32_t m_nNumToSpawn; // 0x_            
            source2sdk::client::EArtyTeam m_eSpawnedUnitTeam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_szGameObject; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in ArtySpawnerDef_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::ArtySpawnerDef_t) == 0x_);
    };
};
