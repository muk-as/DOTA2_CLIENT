#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"

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
        // Size: 0x18b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Venomancer_PlagueWard : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            bool m_bIsMovable; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            QAngle m_angle; // 0x189c            
            std::int32_t m_iPoseParameterAim; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Venomancer_PlagueWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Venomancer_PlagueWard) == 0x18b0);
    };
};
