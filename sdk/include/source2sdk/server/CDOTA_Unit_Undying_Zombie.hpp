#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Creep.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

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
        // Size: 0x1908
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Undying_Zombie : public source2sdk::server::CDOTA_BaseNPC_Creep
        {
        public:
            source2sdk::server::CountdownTimer m_ctRespawn; // 0x18e8            
            source2sdk::server::CDOTA_BaseNPC* m_pTombstone; // 0x1900            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Undying_Zombie because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Undying_Zombie) == 0x1908);
    };
};
