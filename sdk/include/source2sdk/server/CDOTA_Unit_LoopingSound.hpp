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
        // Size: 0x19a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "char m_pszNetworkedSoundLoop"
        // static metadata: MNetworkVarNames "int m_nLoopingSoundParity"
        #pragma pack(push, 1)
        class CDOTA_Unit_LoopingSound : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            // metadata: MNetworkEnable
            char m_pszNetworkedSoundLoop[256]; // 0x1898            
            // metadata: MNetworkEnable
            std::int32_t m_nLoopingSoundParity; // 0x1998            
            uint8_t _pad199c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_LoopingSound because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_LoopingSound) == 0x19a0);
    };
};
