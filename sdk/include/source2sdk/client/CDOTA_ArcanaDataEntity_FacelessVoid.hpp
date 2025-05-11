#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_ArcanaDataEntity_Base.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "int m_nNumPoints"
        // static metadata: MNetworkVarNames "GameTime_t m_flShowPopupTime"
        #pragma pack(push, 1)
        class CDOTA_ArcanaDataEntity_FacelessVoid : public source2sdk::client::CDOTA_ArcanaDataEntity_Base
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nNumPoints; // 0x30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFacelessVoidArcanaChanged"
            source2sdk::entity2::GameTime_t m_flShowPopupTime; // 0x34            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ArcanaDataEntity_FacelessVoid because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_ArcanaDataEntity_FacelessVoid) == 0x38);
    };
};
