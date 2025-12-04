#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathSimple;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerPush : public source2sdk::server::CBaseTrigger
        {
        public:
            QAngle m_angPushEntitySpace; // 0x_            
            Vector m_vecPushDirEntitySpace; // 0x_            
            bool m_bTriggerOnStartTouch; // 0x_            
            bool m_bUsePathSimple; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszPathSimpleName; // 0x_            
            source2sdk::server::CPathSimple* m_PathSimple; // 0x_            
            std::uint32_t m_splinePushType; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // Vector InputSetPushDirection; // 0x_
            // float InputSetPushSpeed; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPush) == 0x_);
    };
};
