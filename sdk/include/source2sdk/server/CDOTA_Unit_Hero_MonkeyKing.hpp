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
        // Size: 0x1eb8
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
            std::uint32_t m_nTreeDisguise; // 0x1e90            
            // metadata: MNetworkEnable
            std::uint32_t m_nPerchedTree; // 0x1e94            
            Vector m_vLastPos; // 0x1e98            
            bool m_bIsOnCloud; // 0x1ea4            
            uint8_t _pad1ea5[0x3]; // 0x1ea5
            float m_fTotalDistOnCloud; // 0x1ea8            
            float m_fTotalDistoffCloud; // 0x1eac            
            float m_fBackOnCloudThresh; // 0x1eb0            
            uint8_t _pad1eb4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_MonkeyKing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_MonkeyKing) == 0x1eb8);
    };
};
