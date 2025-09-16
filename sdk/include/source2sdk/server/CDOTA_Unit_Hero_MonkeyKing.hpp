#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1f40
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DotaTreeId_t m_nTreeDisguise"
        // static metadata: MNetworkVarNames "DotaTreeId_t m_nPerchedTree"
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_MonkeyKing : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_nTreeDisguise; // 0x1f18            
            // metadata: MNetworkEnable
            std::uint32_t m_nPerchedTree; // 0x1f1c            
            Vector m_vLastPos; // 0x1f20            
            bool m_bIsOnCloud; // 0x1f2c            
            uint8_t _pad1f2d[0x3]; // 0x1f2d
            float m_fTotalDistOnCloud; // 0x1f30            
            float m_fTotalDistoffCloud; // 0x1f34            
            float m_fBackOnCloudThresh; // 0x1f38            
            uint8_t _pad1f3c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_MonkeyKing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_MonkeyKing) == 0x1f40);
    };
};
