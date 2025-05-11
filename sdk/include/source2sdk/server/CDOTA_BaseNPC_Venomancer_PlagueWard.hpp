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
        // Size: 0x1878
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Venomancer_PlagueWard : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            bool m_bIsMovable; // 0x1860            
            uint8_t _pad1861[0x3]; // 0x1861
            QAngle m_angle; // 0x1864            
            std::int32_t m_iPoseParameterAim; // 0x1870            
            uint8_t _pad1874[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Venomancer_PlagueWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Venomancer_PlagueWard) == 0x1878);
    };
};
