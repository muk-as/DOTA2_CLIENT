#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_ArcanaDataEntity_Base.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // 
        // static metadata: MNetworkVarNames "int m_nNumPoints"
        // static metadata: MNetworkVarNames "GameTime_t m_flShowPopupTime"
        #pragma pack(push, 1)
        class CDOTA_ArcanaDataEntity_FacelessVoid : public source2sdk::client::CDOTA_ArcanaDataEntity_Base
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nNumPoints; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFacelessVoidArcanaChanged"
            source2sdk::entity2::GameTime_t m_flShowPopupTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ArcanaDataEntity_FacelessVoid because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_ArcanaDataEntity_FacelessVoid) == 0x_);
    };
};
