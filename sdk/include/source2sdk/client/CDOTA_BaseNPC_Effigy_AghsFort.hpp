#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"

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
        // Size: 0x1a90
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Effigy_AghsFort : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            std::uint32_t m_unStatusEffectIndex; // 0x1a88            
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Effigy_AghsFort because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_BaseNPC_Effigy_AghsFort) == 0x1a90);
    };
};
