#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"

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
        // Size: 0x1b38
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "char m_pszNetworkedSoundLoop"
        // static metadata: MNetworkVarNames "int m_nLoopingSoundParity"
        #pragma pack(push, 1)
        class C_DOTA_Unit_LoopingSound : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            uint8_t _pad1a18[0x14]; // 0x1a18
            std::int32_t m_nPrevLoopingSoundParity; // 0x1a2c            
            // metadata: MNetworkEnable
            char m_pszNetworkedSoundLoop[256]; // 0x1a30            
            // metadata: MNetworkEnable
            std::int32_t m_nLoopingSoundParity; // 0x1b30            
            uint8_t _pad1b34[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_LoopingSound because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_LoopingSound) == 0x1b38);
    };
};
